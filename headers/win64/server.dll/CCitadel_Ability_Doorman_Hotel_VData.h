#pragma once

class CCitadel_Ability_Doorman_Hotel_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1680, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_NoDrawModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FreezeModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HotelModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TeleportFXModifier; // offset 0x1428, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PreTeleportModifier; // offset 0x1438, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x1448, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Doorman_Hotel_Imposter > m_ImposterModifier; // offset 0x1458, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TrackEnemy; // offset 0x1468, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TimeslowModifier; // offset 0x1478, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1488, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // offset 0x1568, size 0xE0, align 8
    CSoundEventName m_strLateHitConfirmSound; // offset 0x1648, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSequenceTriggerOffset; // offset 0x1658, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTeleportToHotelDelay; // offset 0x165C, size 0x4, align 4 | MPropertyDescription
    float32 m_flTeleportToSourceDelay; // offset 0x1660, size 0x4, align 4 | MPropertyDescription
    float32 m_flPostSourceTeleportHold; // offset 0x1664, size 0x4, align 4 | MPropertyDescription
    float32 m_flFadeToBlackDuration; // offset 0x1668, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanGroundSpeedMax; // offset 0x166C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirSpeedMax; // offset 0x1670, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanFallSpeedMax; // offset 0x1674, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirDrag; // offset 0x1678, size 0x4, align 4 | MPropertyDescription
    char _pad_167C[0x4]; // offset 0x167C
};
