#pragma once

class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_pszTimeOfDayParameter; // offset 0x1D8, size 0x80, align 1 | MPropertyFriendlyName
    Vector m_vecDefaultValue; // offset 0x258, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_0264[0x4]; // offset 0x264
};
