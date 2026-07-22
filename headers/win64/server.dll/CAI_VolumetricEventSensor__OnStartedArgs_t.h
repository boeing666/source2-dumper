#pragma once

struct CAI_VolumetricEventSensor::OnStartedArgs_t  // sizeof 0x18, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    AI_VolumetricEventHandle_t hEvent; // offset 0x0, size 0x8, align 255
    VectorWS vOrigin; // offset 0x8, size 0xC, align 4
    float32 flRadius; // offset 0x14, size 0x4, align 4
};
