#pragma once

class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1148, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSwapStarted; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x1090, size 0xA0, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x1130, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x1134, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1138, size 0x4, align 4
    float32 m_flInitialSlowSpeed; // offset 0x113C, size 0x4, align 4
    float32 m_flInitialSpeedBias; // offset 0x1140, size 0x4, align 4
    float32 m_flMaxSurfacePitch; // offset 0x1144, size 0x4, align 4
};
