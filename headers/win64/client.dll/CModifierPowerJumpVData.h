#pragma once

class CModifierPowerJumpVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x870, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalCameraOffset; // offset 0x874, size 0x4, align 4
    float32 m_flVerticalCameraOffsetLerpTime; // offset 0x878, size 0x4, align 4
    float32 m_flVerticalCameraOffsetBias; // offset 0x87C, size 0x4, align 4
};
