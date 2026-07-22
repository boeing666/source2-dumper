#pragma once

class CModifierPowerJumpVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x830, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalCameraOffset; // offset 0x834, size 0x4, align 4
    float32 m_flVerticalCameraOffsetLerpTime; // offset 0x838, size 0x4, align 4
    float32 m_flVerticalCameraOffsetBias; // offset 0x83C, size 0x4, align 4
};
