#pragma once

class CFlexController  // sizeof 0x18, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_szName; // offset 0x0, size 0x8, align 8
    CUtlString m_szType; // offset 0x8, size 0x8, align 8
    float32 min; // offset 0x10, size 0x4, align 4
    float32 max; // offset 0x14, size 0x4, align 4
};
