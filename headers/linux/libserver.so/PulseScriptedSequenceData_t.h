#pragma once

struct PulseScriptedSequenceData_t  // sizeof 0x38, align 0x8 (server) {MGetKV3ClassDefaults}
{
    int32 m_nActorID; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_szPreIdleSequence; // offset 0x8, size 0x8, align 8
    CUtlString m_szEntrySequence; // offset 0x10, size 0x8, align 8
    CUtlString m_szSequence; // offset 0x18, size 0x8, align 8
    CUtlString m_szExitSequence; // offset 0x20, size 0x8, align 8
    ScriptedMoveTo_t m_nMoveTo; // offset 0x28, size 0x4, align 4
    SharedMovementGait_t m_nMoveToGait; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // offset 0x30, size 0x4, align 4
    bool m_bLoopPreIdleSequence; // offset 0x34, size 0x1, align 1
    bool m_bLoopActionSequence; // offset 0x35, size 0x1, align 1
    bool m_bLoopPostIdleSequence; // offset 0x36, size 0x1, align 1
    bool m_bIgnoreLookAt; // offset 0x37, size 0x1, align 1
};
