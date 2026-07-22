#pragma once

enum CameraParamMode : uint32_t  // sizeof 0x4
{
    k_EParamMode_AllowInOneContext = 0,
    k_EParamMode_AllowInMultipleContexts = 1,
};
