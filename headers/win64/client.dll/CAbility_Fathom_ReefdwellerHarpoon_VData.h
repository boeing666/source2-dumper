#pragma once

class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSwapStarted; // offset 0x1828, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x1838, size 0x88, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x18C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x18C4, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x18C8, size 0x4, align 4
    float32 m_flInitialSlowSpeed; // offset 0x18CC, size 0x4, align 4
    float32 m_flInitialSpeedBias; // offset 0x18D0, size 0x4, align 4
    float32 m_flMaxSurfacePitch; // offset 0x18D4, size 0x4, align 4
};
