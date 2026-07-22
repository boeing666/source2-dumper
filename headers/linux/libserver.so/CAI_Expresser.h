#pragma once

class CAI_Expresser  // sizeof 0xA0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlDict< GameTime_t > m_conceptCooldowns; // offset 0x10, size 0x28, align 8
    CUtlDict< GameTime_t > m_ruleCooldowns; // offset 0x38, size 0x28, align 8
    GameTime_t m_flStopTalkTime; // offset 0x60, size 0x4, align 255
    GameTime_t m_flStopTalkTimeWithoutDelay; // offset 0x64, size 0x4, align 255
    GameTime_t m_flQueuedSpeechTime; // offset 0x68, size 0x4, align 255
    GameTime_t m_flBlockedTalkTime; // offset 0x6C, size 0x4, align 255
    int32 m_voicePitch; // offset 0x70, size 0x4, align 4
    GameTime_t m_flLastTimeAcceptedSpeak; // offset 0x74, size 0x4, align 255
    bool m_bAllowSpeakingInterrupts; // offset 0x78, size 0x1, align 1
    bool m_bConsiderSceneInvolvementAsSpeech; // offset 0x79, size 0x1, align 1
    bool m_bSceneEntityDisabled; // offset 0x7A, size 0x1, align 1
    char _pad_007B[0x1]; // offset 0x7B
    int32 m_nLastSpokenPriority; // offset 0x7C, size 0x4, align 4
    char _pad_0080[0x18]; // offset 0x80
    CBaseModelEntity* m_pOuter; // offset 0x98, size 0x8, align 8 | MNotSaved
};
