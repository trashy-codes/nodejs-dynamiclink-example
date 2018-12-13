#include <napi.h>
#include "sdk.h"

Napi::String Method(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    return Napi::String::New(env, sdk::Test());
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "test"),
                Napi::Function::New(env, Method));
    return exports;
}

NODE_API_MODULE(sdk, Init)
