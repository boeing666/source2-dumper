#pragma once

class CVoiceContainerLoopTriggerWithRandomPanner : public CVoiceContainerLoopTrigger /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CRandomPannerControls m_randomPannerControls; // offset 0xA0, size 0x20, align 8 | MPropertyFriendlyName
};
