#pragma once

class CCitadel_CapturePointVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x490, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strPreEnableParticle; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strOnBecomeEnableParticle; // offset 0x108, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strEnabledParticle; // offset 0x1E8, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strOnFullyCapturedParticle; // offset 0x2C8, size 0xE0, align 8 | MPropertyDescription
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_EnabledLoopSounds; // offset 0x3A8, size 0x28, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_EnemyCapturingLoopSounds; // offset 0x3D0, size 0x28, align 8 | MPropertyDescription
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_FriendlyCapturingLoopSounds; // offset 0x3F8, size 0x28, align 8 | MPropertyDescription
    CSoundEventName m_strPreEnableStartSound; // offset 0x420, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strEnableStartSound; // offset 0x430, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strFullyCapturedSound; // offset 0x440, size 0x10, align 8 | MPropertyDescription
    CEmbeddedSubclass< CBaseModifier > m_modifierCapturer; // offset 0x450, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flDecaySpeed; // offset 0x460, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    CRemapFloat m_remapCapturersToCaptureTime; // offset 0x464, size 0x10, align 255 | MPropertyDescription
    float32 m_flEnemyProgressRemoveScale; // offset 0x474, size 0x4, align 4 | MPropertyDescription
    float32 m_flTotalHealthToCapture; // offset 0x478, size 0x4, align 4 | MPropertyDescription
    CRangeFloat m_flInitialEnableTimeInSeconds; // offset 0x47C, size 0x8, align 255 | MPropertyStartGroup MPropertyDescription
    float32 m_flPreEnableWindowInSeconds; // offset 0x484, size 0x4, align 4 | MPropertyDescription
    CRangeFloat m_flRespawnRangeInSeconds; // offset 0x488, size 0x8, align 255 | MPropertyDescription
};
