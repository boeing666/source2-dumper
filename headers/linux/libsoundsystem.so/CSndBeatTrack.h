#pragma once

class CSndBeatTrack  // sizeof 0x98, align 0x8 (soundsystem) {MPropertyArrayElementNameKey MVDataAnonymousNode MVDataOutlinerNameExpr MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_0008[0x18]; // offset 0x8
    SndBeatTrackPlaybackType_t m_playbackType; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nTranspose; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSyncToVoice; // offset 0x28, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0029[0x3]; // offset 0x29
    float32 m_flBPM; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0030[0x68]; // offset 0x30
};
