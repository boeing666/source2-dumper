#pragma once

class CCitadel_Ability_Doorman_Hotel_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1638, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_NoDrawModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FreezeModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HotelModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TeleportFXModifier; // offset 0x13E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PreTeleportModifier; // offset 0x13F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x1400, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Doorman_Hotel_Imposter > m_ImposterModifier; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TrackEnemy; // offset 0x1420, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TimeslowModifier; // offset 0x1430, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1440, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // offset 0x1520, size 0xE0, align 8
    CSoundEventName m_strLateHitConfirmSound; // offset 0x1600, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSequenceTriggerOffset; // offset 0x1610, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTeleportToHotelDelay; // offset 0x1614, size 0x4, align 4 | MPropertyDescription
    float32 m_flTeleportToSourceDelay; // offset 0x1618, size 0x4, align 4 | MPropertyDescription
    float32 m_flPostSourceTeleportHold; // offset 0x161C, size 0x4, align 4 | MPropertyDescription
    float32 m_flFadeToBlackDuration; // offset 0x1620, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanGroundSpeedMax; // offset 0x1624, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirSpeedMax; // offset 0x1628, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanFallSpeedMax; // offset 0x162C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirDrag; // offset 0x1630, size 0x4, align 4 | MPropertyDescription
    char _pad_1634[0x4]; // offset 0x1634
};
