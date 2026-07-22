#pragma once

class C_INIT_SequenceFromCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    bool m_bKillUnused; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRadiusScale; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    int32 m_nCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffset; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01F4[0x4]; // offset 0x1F4
};
