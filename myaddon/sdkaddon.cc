#include <napi.h>
#include "sdk.h"
#include <iostream>
#include <string>

Napi::String Method(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    char str[100];
    sdk::Test(str);
    return Napi::String::New(env, str);
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "test"), Napi::Function::New(env, Method));
    return exports;
}

NODE_API_MODULE(sdkaddon, Init)
