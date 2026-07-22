#pragma once

class CSurvivorsAttributeValue  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsAttributeType_t m_eType; // offset 0x0, size 0x4, align 4
    float32 m_flValue; // offset 0x4, size 0x4, align 4
};
