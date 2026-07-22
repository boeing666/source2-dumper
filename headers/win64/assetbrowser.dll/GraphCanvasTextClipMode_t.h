#pragma once

enum GraphCanvasTextClipMode_t : uint32_t  // sizeof 0x4
{
    EXPAND_ITEM = 0,
    CLIP_TEXT = 1,
    ELIDE_TEXT_END = 2,
    WORD_WRAP = 3,
};
