#pragma once

class FollowAttachmentData  // sizeof 0x8, align 0x4 [trivial_dtor] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    int32 m_boneIndex; // offset 0x0, size 0x4, align 4
    AttachmentHandle_t m_attachmentHandle; // offset 0x4, size 0x1, align 255
    char _pad_0005[0x3]; // offset 0x5
};
