#pragma once

class CFollowAttachmentUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x110, align 0x10 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    FollowAttachmentSettings_t m_opFixedData; // offset 0x70, size 0x90, align 16
    char _pad_0100[0x10]; // offset 0x100
};
