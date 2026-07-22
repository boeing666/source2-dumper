#pragma once

class CCitadel_MultiCapturePointVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strPreEnableParticle; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strOnBecomeEnableParticle; // offset 0x108, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strEnabledParticle; // offset 0x1E8, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strOnFullyCapturedParticle; // offset 0x2C8, size 0xE0, align 8 | MPropertyDescription
    bool m_bPingMinimapOnActive; // offset 0x3A8, size 0x1, align 1 | MPropertyDescription
    char _pad_03A9[0x7]; // offset 0x3A9
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_EnabledLoopSounds; // offset 0x3B0, size 0x28, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_EnemyCapturingLoopSounds; // offset 0x3D8, size 0x28, align 8 | MPropertyDescription
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_FriendlyCapturingLoopSounds; // offset 0x400, size 0x28, align 8 | MPropertyDescription
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_EnemyAndFriendlyCapturingLoopSounds; // offset 0x428, size 0x28, align 8 | MPropertyDescription
    CSoundEventName m_strPreEnableStartSound; // offset 0x450, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strEnableStartSound; // offset 0x460, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strFullyCapturedSound; // offset 0x470, size 0x10, align 8 | MPropertyDescription
    CEmbeddedSubclass< CBaseModifier > m_modifierCapturer; // offset 0x480, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flDecaySpeed; // offset 0x490, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTotalTimeToCapture; // offset 0x494, size 0x4, align 4 | MPropertyDescription
    bool m_bDestroyNearbyNeutrals; // offset 0x498, size 0x1, align 1 | MPropertyDescription
    char _pad_0499[0x3]; // offset 0x499
    float32 m_flHoldAtPercent; // offset 0x49C, size 0x4, align 4 | MPropertyDescription
    float32 m_flStepOutGraceWindow; // offset 0x4A0, size 0x4, align 4 | MPropertyDescription
    char _pad_04A4[0x4]; // offset 0x4A4
};
