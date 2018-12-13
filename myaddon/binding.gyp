{
  "targets": [
    {
      "target_name": "sdkaddon",
      'conditions': [
        [ 'OS=="win"', {
            "cflags!": [ "-fno-exceptions" ],
            "cflags_cc!": [ "-fno-exceptions" ],
            "sources": [ "sdkaddon.cc" ],
            "include_dirs": [
              "<!@(node -p \"require('node-addon-api').include\")",
              'sdk/include'
            ],
            'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ],
            'link_settings': {
            'conditions': [
              ['target_arch=="ia32"', {
                'libraries': [
                  '<(PRODUCT_DIR)/../../sdk/lib/x86/sdk.lib',
                ],
                "copies": [
                  {
                    "destination": "build/Release",
                    "files": [
                      "sdk/lib/x86/sdk.dll"
                    ]
                  }
                ]
              },{
                'libraries': [
                  '<(PRODUCT_DIR)/../../sdk/lib/x64/sdk.lib',
                ],
                "copies": [
                  {
                    "destination": "build/Release",
                    "files": [
                      "sdk/lib/x64/sdk.dll"
                    ]
                  }
                ]
              }]
            ],
          },
        }]
      ],
    }
  ]
}
