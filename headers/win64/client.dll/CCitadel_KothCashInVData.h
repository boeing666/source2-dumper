#pragma once

class CCitadel_KothCashInVData : public CCitadel_MultiCapturePointVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZoneParticle; // offset 0x4A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndParticleFriendly; // offset 0x588, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndParticleEnemy; // offset 0x668, size 0xE0, align 8
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x748, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ComebackAuraModifier; // offset 0x758, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_TrooperModifier; // offset 0x768, size 0x10, align 8
    CSoundEventName m_strKothCashedInSoundFriendly; // offset 0x778, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strKothCashedInSoundEnemy; // offset 0x788, size 0x10, align 8
    CSoundEventName m_strKothContestedSound; // offset 0x798, size 0x10, align 8
    CSoundEventName m_strKothBlockedSound; // offset 0x7A8, size 0x10, align 8
    CSoundEventName m_strKothGiveUpSound; // offset 0x7B8, size 0x10, align 8
    CSoundEventName m_strKothGiveUpWarnSound; // offset 0x7C8, size 0x10, align 8
    CSoundEventName m_strKothCashinLoopSound; // offset 0x7D8, size 0x10, align 8
    CSoundEventName m_strKothGivingUpWarningLoopSound; // offset 0x7E8, size 0x10, align 8
    CSoundEventName m_strKothContestedLoopSound; // offset 0x7F8, size 0x10, align 8
    CSoundEventName m_strKothCaptureStartAnnounce; // offset 0x808, size 0x10, align 8
    int32 m_iComebackBounty; // offset 0x818, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flZoneHeightMeters; // offset 0x81C, size 0x4, align 4
    float32 m_flTotalTimeToCaptureFavored; // offset 0x820, size 0x4, align 4
    float32 m_flTotalTimeToCaptureUnfavored; // offset 0x824, size 0x4, align 4
    float32 m_flTimeToGiveUp; // offset 0x828, size 0x4, align 4
    float32 m_flTimeToWarnAboutGivingUp; // offset 0x82C, size 0x4, align 4
    int32 m_nGiveUpOrbs; // offset 0x830, size 0x4, align 4
    float32 m_flTroopersMin; // offset 0x834, size 0x4, align 4
    float32 m_flTroopersMax; // offset 0x838, size 0x4, align 4
    float32 m_flTroopersSpawnRate; // offset 0x83C, size 0x4, align 4
    float32 m_flDelayedDelete; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
