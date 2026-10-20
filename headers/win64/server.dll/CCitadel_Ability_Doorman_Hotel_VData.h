#pragma once

class CCitadel_Ability_Doorman_Hotel_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1308, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_NoDrawModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FreezeModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HotelModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TeleportFXModifier; // offset 0x10B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PreTeleportModifier; // offset 0x10C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x10D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Doorman_Hotel_Imposter > m_ImposterModifier; // offset 0x10E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TrackEnemy; // offset 0x10F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TimeslowModifier; // offset 0x1100, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1110, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // offset 0x11F0, size 0xE0, align 8
    CSoundEventName m_strLateHitConfirmSound; // offset 0x12D0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSequenceTriggerOffset; // offset 0x12E0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTeleportToHotelDelay; // offset 0x12E4, size 0x4, align 4 | MPropertyDescription
    float32 m_flTeleportToSourceDelay; // offset 0x12E8, size 0x4, align 4 | MPropertyDescription
    float32 m_flPostSourceTeleportHold; // offset 0x12EC, size 0x4, align 4 | MPropertyDescription
    float32 m_flFadeToBlackDuration; // offset 0x12F0, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanGroundSpeedMax; // offset 0x12F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirSpeedMax; // offset 0x12F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanFallSpeedMax; // offset 0x12FC, size 0x4, align 4 | MPropertyDescription
    float32 m_flDoormanAirDrag; // offset 0x1300, size 0x4, align 4 | MPropertyDescription
    char _pad_1304[0x4]; // offset 0x1304
};
