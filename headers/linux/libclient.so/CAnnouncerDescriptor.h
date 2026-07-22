#pragma once

class CAnnouncerDescriptor  // sizeof 0x28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strAnnouncerName; // offset 0x8, size 0x8, align 8
    CUtlString m_strAnnouncerVoiceFile; // offset 0x10, size 0x8, align 8
    itemid_t m_nAnnouncerItemId; // offset 0x18, size 0x8, align 255
    bool m_bItemOwnedByLocalPlayer; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
