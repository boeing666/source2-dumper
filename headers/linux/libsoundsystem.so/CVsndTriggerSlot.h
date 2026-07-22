#pragma once

class CVsndTriggerSlot  // sizeof 0x88, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    bool m_bEnableVsnd; // offset 0x0, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName
    char _pad_0001[0x7]; // offset 0x1
    CSoundContainerReference m_vsnd; // offset 0x8, size 0x20, align 8 | MPropertyGroupName MPropertyFriendlyName
    bool m_bEnableEndcap; // offset 0x28, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName
    char _pad_0029[0x7]; // offset 0x29
    CSoundContainerReference m_endcapVsnd; // offset 0x30, size 0x20, align 8 | MPropertyGroupName MPropertyFriendlyName
    bool m_bEnableLoopcap; // offset 0x50, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName
    char _pad_0051[0x7]; // offset 0x51
    CSoundContainerReference m_loopcapVsnd; // offset 0x58, size 0x20, align 8 | MPropertyGroupName MPropertyFriendlyName
    float32 m_volume; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fadeOut; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName
    EVsndTriggerMode m_mode; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0084[0x4]; // offset 0x84
};
