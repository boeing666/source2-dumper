#pragma once

enum DecalRtEncoding_t : uint8_t  // sizeof 0x1
{
    kDecalInvalid = 255,
    kDecalMin = 0,
    kDecalBlood = 0,
    kDecalCloak = 1,
    kDecalMax = 2,
    kDecalDefault = 0,
};
