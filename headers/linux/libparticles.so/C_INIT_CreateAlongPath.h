#pragma once

class C_INIT_CreateAlongPath : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x520, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_fMaxDistance; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fT; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPathParameters m_PathParams; // offset 0x4C0, size 0x40, align 16
    bool m_bUseRandomCPs; // offset 0x500, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0501[0x3]; // offset 0x501
    Vector m_vEndOffset; // offset 0x504, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bSaveOffset; // offset 0x510, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0511[0xF]; // offset 0x511
};
