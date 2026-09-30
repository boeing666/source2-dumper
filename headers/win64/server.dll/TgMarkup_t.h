#pragma once

struct TgMarkup_t  // sizeof 0x18, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CUtlString m_tag; // offset 0x0, size 0x8, align 8
    CUtlString m_name; // offset 0x8, size 0x8, align 8
    bool m_bIsOptional; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
