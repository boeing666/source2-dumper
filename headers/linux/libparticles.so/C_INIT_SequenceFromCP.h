#pragma once

class C_INIT_SequenceFromCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    bool m_bKillUnused; // offset 0x1D4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRadiusScale; // offset 0x1D5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D6[0x2]; // offset 0x1D6
    int32 m_nCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffset; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
};
