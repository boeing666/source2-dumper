#pragma once

struct CrownfallSurvivorsLightingEnvironment_t  // sizeof 0x28, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    Vector vecLightDirection; // offset 0x0, size 0xC, align 4
    float32 flGlobalLightScale; // offset 0xC, size 0x4, align 4
    float32 flPointLightScale; // offset 0x10, size 0x4, align 4
    Color cLightColor; // offset 0x14, size 0x4, align 1
    Color cAmbientColor; // offset 0x18, size 0x4, align 1
    Color cShadowColor; // offset 0x1C, size 0x4, align 1
    Color cShadowSecondaryColor; // offset 0x20, size 0x4, align 1
    Color cSpecularColor; // offset 0x24, size 0x4, align 1
};
