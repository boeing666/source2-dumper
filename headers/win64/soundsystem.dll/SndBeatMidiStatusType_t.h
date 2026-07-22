#pragma once

enum SndBeatMidiStatusType_t : uint32_t  // sizeof 0x4
{
    SndSeqMidiStatusNoteOff = 8,
    SndSeqMidiStatusNoteOn = 9,
    SndSeqMidiStatusKeyPressure = 10,
    SndSeqMidiStatusCtrlChange = 11,
    SndSeqMidiStatusProgramChange = 12,
    SndSeqMidiStatusChannelPressure = 13,
    SndSeqMidiStatusPitchBend = 14,
};
