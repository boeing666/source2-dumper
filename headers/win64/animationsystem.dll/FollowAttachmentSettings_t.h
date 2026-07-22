#pragma once

struct FollowAttachmentSettings_t  // sizeof 0x90, align 0x10 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    CAnimAttachment m_attachment; // offset 0x0, size 0x80, align 16
    int32 m_boneIndex; // offset 0x80, size 0x4, align 4
    AttachmentHandle_t m_attachmentHandle; // offset 0x84, size 0x1, align 255
    bool m_bMatchTranslation; // offset 0x85, size 0x1, align 1
    bool m_bMatchRotation; // offset 0x86, size 0x1, align 1
    char _pad_0087[0x9]; // offset 0x87
};
