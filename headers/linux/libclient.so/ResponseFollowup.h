#pragma once

class ResponseFollowup  // sizeof 0x1C, align 0xFF [trivial_dtor] (client)
{
public:
    char* followup_concept; // offset 0x0, size 0x8, align 8
    char* followup_contexts; // offset 0x8, size 0x8, align 8
    float32 followup_delay; // offset 0x10, size 0x4, align 4
    char* followup_target; // offset 0x14, size 0x8, align 8
};
