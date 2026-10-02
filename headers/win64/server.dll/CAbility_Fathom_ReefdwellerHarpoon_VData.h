#pragma once

class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSwapStarted; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x1408, size 0xA0, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x14A8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x14AC, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x14B0, size 0x4, align 4
    float32 m_flInitialSlowSpeed; // offset 0x14B4, size 0x4, align 4
    float32 m_flInitialSpeedBias; // offset 0x14B8, size 0x4, align 4
    float32 m_flMaxSurfacePitch; // offset 0x14BC, size 0x4, align 4
};
