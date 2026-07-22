#pragma once

struct PlayerSeatAssignment_t  // sizeof 0x10, align 0xFF [trivial_ctor trivial_dtor] (client)
{
    uint32 unAccountID; // offset 0x0, size 0x4, align 4
    uint32 unSeat; // offset 0x4, size 0x4, align 4
    uint32 unReversedSeat; // offset 0x8, size 0x4, align 4
    uint32 unTeamID; // offset 0xC, size 0x4, align 4
};
