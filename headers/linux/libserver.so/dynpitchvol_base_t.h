#pragma once

struct dynpitchvol_base_t  // sizeof 0x64, align 0x4 [trivial_ctor trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    int32 preset; // offset 0x0, size 0x4, align 4
    int32 pitchrun; // offset 0x4, size 0x4, align 4
    int32 pitchstart; // offset 0x8, size 0x4, align 4
    int32 spinup; // offset 0xC, size 0x4, align 4
    int32 spindown; // offset 0x10, size 0x4, align 4
    int32 volrun; // offset 0x14, size 0x4, align 4
    int32 volstart; // offset 0x18, size 0x4, align 4
    int32 fadein; // offset 0x1C, size 0x4, align 4
    int32 fadeout; // offset 0x20, size 0x4, align 4
    int32 lfotype; // offset 0x24, size 0x4, align 4
    int32 lforate; // offset 0x28, size 0x4, align 4
    int32 lfomodpitch; // offset 0x2C, size 0x4, align 4
    int32 lfomodvol; // offset 0x30, size 0x4, align 4
    int32 cspinup; // offset 0x34, size 0x4, align 4
    int32 cspincount; // offset 0x38, size 0x4, align 4
    int32 pitch; // offset 0x3C, size 0x4, align 4
    int32 spinupsav; // offset 0x40, size 0x4, align 4
    int32 spindownsav; // offset 0x44, size 0x4, align 4
    int32 pitchfrac; // offset 0x48, size 0x4, align 4
    int32 vol; // offset 0x4C, size 0x4, align 4
    int32 fadeinsav; // offset 0x50, size 0x4, align 4
    int32 fadeoutsav; // offset 0x54, size 0x4, align 4
    int32 volfrac; // offset 0x58, size 0x4, align 4
    int32 lfofrac; // offset 0x5C, size 0x4, align 4
    int32 lfomult; // offset 0x60, size 0x4, align 4
};
