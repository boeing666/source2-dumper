#pragma once

class CVMixGraphDescData  // sizeof 0x10, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    int32 m_nGraphOutputChannels; // offset 0x8, size 0x4, align 4
    bool m_bIsMainGraph; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
