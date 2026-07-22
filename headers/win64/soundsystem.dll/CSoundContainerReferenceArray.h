#pragma once

class CSoundContainerReferenceArray  // sizeof 0x38, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    bool m_bUseReference; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0001[0x7]; // offset 0x1
    CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_sounds; // offset 0x8, size 0x18, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CUtlVector< CVoiceContainerBase* > m_pSounds; // offset 0x20, size 0x18, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
