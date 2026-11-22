// Stub for builds without Qualcomm's QAIRT headers: reports the NPU tower as
// unavailable so OCR falls back to the ggml vision tower.

#include "qnn_vit.h"

namespace qnnvit {

int init(const char *, const char *, int) {
    return -1;
}

bool runtime_available() {
    return false;
}

bool ready() {
    return false;
}

void shutdown() {}

int encode_rgba(const uint8_t *, int, int) {
    return -1;
}

const float * take_pending(int * n_tokens) {
    if (n_tokens) {
        *n_tokens = 0;
    }
    return nullptr;
}

}  // namespace qnnvit
