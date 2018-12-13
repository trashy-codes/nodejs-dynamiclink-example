#include <napi.h>
#include "sdk.h"
#include <iostream>

Napi::String Method(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    std::cout << "1test";

    try
    { /* */
        std::string re = sdk::Test();

        int test = sdk::Scan();
        std::cout << "Hello World!\n" + re;
        std::cout << test;

    }
    catch (...)
    { /* */
        std::cout << "ex";
    }
    std::cout << "3test";

    // std::cout << "Hello World!\n" + re;
    //+ sdk::Scan()
    return Napi::String::New(env, "test");
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "test"),
                Napi::Function::New(env, Method));
    return exports;
}

NODE_API_MODULE(sdk, Init)
