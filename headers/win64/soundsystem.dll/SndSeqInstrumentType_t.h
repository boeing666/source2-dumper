#pragma once

enum SndSeqInstrumentType_t : uint32_t  // sizeof 0x4
{
    eSndSeqInstNull = 0,
    eSndSeqInstSndEvt = 1,
    eSndSeqInstMidiSampler = 2,
};
