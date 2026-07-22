#pragma once

class CHeadLookParams  // sizeof 0x20, align 0xFF [trivial_dtor] (server)
{
public:
    CHeadLookParams::HeadLookPriority_t m_LookPriority; // offset 0x0, size 0x4, align 4
    float32 m_flLookDuration; // offset 0x4, size 0x4, align 4
    INextBotReply* m_pReplyWhenAimed; // offset 0x8, size 0x8, align 8
    char* m_pReasonStr; // offset 0x10, size 0x8, align 8
    bool m_bWaitForSteady; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
    float32 m_flEaseInTime; // offset 0x1C, size 0x4, align 4
};
