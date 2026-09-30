#pragma once

class C_INIT_CreateAlongPath : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x540, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_fMaxDistance; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fT; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    char _pad_04D8[0x8]; // offset 0x4D8
    CPathParameters m_PathParams; // offset 0x4E0, size 0x40, align 16
    bool m_bUseRandomCPs; // offset 0x520, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0521[0x3]; // offset 0x521
    Vector m_vEndOffset; // offset 0x524, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bSaveOffset; // offset 0x530, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0531[0xF]; // offset 0x531
};
