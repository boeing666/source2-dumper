#pragma once

class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1460, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSwapStarted; // offset 0x13B0, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x13C0, size 0x88, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x1448, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x144C, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1450, size 0x4, align 4
    float32 m_flInitialSlowSpeed; // offset 0x1454, size 0x4, align 4
    float32 m_flInitialSpeedBias; // offset 0x1458, size 0x4, align 4
    float32 m_flMaxSurfacePitch; // offset 0x145C, size 0x4, align 4
};
