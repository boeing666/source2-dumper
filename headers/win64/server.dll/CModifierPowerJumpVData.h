#pragma once

class CModifierPowerJumpVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x840, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalCameraOffset; // offset 0x844, size 0x4, align 4
    float32 m_flVerticalCameraOffsetLerpTime; // offset 0x848, size 0x4, align 4
    float32 m_flVerticalCameraOffsetBias; // offset 0x84C, size 0x4, align 4
};
