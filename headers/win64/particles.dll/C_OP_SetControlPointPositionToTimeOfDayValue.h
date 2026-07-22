#pragma once

class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x278, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_pszTimeOfDayParameter; // offset 0x1E4, size 0x80, align 1 | MPropertyFriendlyName
    Vector m_vecDefaultValue; // offset 0x264, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_0270[0x8]; // offset 0x270
};
