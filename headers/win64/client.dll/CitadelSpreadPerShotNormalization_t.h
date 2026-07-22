#pragma once

struct CitadelSpreadPerShotNormalization_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    bool m_bNormalizeSpreadPerShot; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    CRangeFloat m_FireRatePctRange; // offset 0x4, size 0x8, align 255
    CRangeFloat m_SpreadPerShotFactor; // offset 0xC, size 0x8, align 255
};
