#pragma once

class CRandomPannerControls  // sizeof 0x20, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    CUtlString m_panningControlInputName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_volumeControlInputName; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName
    float32 m_flMinVolume; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxVolume; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strVectorStackParam; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName
};
