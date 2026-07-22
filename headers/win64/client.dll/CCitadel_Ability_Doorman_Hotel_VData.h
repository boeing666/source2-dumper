#pragma once

class CCitadel_Ability_Doorman_Hotel_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_NoDrawModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FreezeModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HotelModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageModifier; // offset 0x1848, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TeleportFXModifier; // offset 0x1858, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PreTeleportModifier; // offset 0x1868, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x1878, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Doorman_Hotel_Imposter > m_ImposterModifier; // offset 0x1888, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TrackEnemy; // offset 0x1898, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TimeslowModifier; // offset 0x18A8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // offset 0x1998, size 0xE0, align 8
    CSoundEventName m_strLateHitConfirmSound; // offset 0x1A78, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSequenceTriggerOffset; // offset 0x1A88, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTeleportToHotelDelay; // offset 0x1A8C, size 0x4, align 4 | MPropertyDescription
    float32 m_flTeleportToSourceDelay; // offset 0x1A90, size 0x4, align 4 | MPropertyDescription
    float32 m_flPostSourceTeleportHold; // offset 0x1A94, size 0x4, align 4 | MPropertyDescription
    float32 m_flFadeToBlackDuration; // offset 0x1A98, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanGroundSpeedMax; // offset 0x1A9C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirSpeedMax; // offset 0x1AA0, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanFallSpeedMax; // offset 0x1AA4, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirDrag; // offset 0x1AA8, size 0x4, align 4 | MPropertyDescription
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
