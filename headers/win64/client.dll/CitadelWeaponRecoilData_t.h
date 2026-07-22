#pragma once

struct CitadelWeaponRecoilData_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CRangeFloat m_Range; // offset 0x0, size 0x8, align 255
    float32 m_flBurstSlope; // offset 0x8, size 0x4, align 4
    float32 m_flBurstExponent; // offset 0xC, size 0x4, align 4
    float32 m_flBurstConstant; // offset 0x10, size 0x4, align 4
};
