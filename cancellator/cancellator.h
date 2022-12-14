#ifndef OS_LAB_1_CANCELLATOR_H
#define OS_LAB_1_CANCELLATOR_H

class cancellator {
public:
    virtual void start() = 0;

    virtual bool has_prompt() = 0;

    virtual bool is_prompt_on() = 0;

    virtual bool is_cancelled() = 0;

    virtual void finish() = 0;

    virtual ~cancellator() {}
};

#endif
