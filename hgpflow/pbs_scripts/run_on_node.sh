source ~/.bashrc
source /usr/wipp/conda/24.5.0u/etc/profile.d/conda.sh
conda activate common

cd $RUN_DIR

if [ "$MODE" == "train" ]; then
    CMD="python -m hgpflow_v2.train -ct $CONFIG_PATH_T -ekey $EXP_KEY --precision $PRECISION"
    if [ -n "$CONFIG_PATH_MS1" ]; then
        CMD="$CMD -cv $CONFIG_PATH_V -cms1 $CONFIG_PATH_MS1"
    elif [ -n "$CONFIG_PATH_MS2" ]; then
        CMD="$CMD -cms2 $CONFIG_PATH_MS2"
    fi
    eval $CMD
    
elif [ "$MODE" == "hyperedge_data_prep" ]; then
    python -m hgpflow_v2.hyperedge_data_prep -i $CONFIG_PATH_INFERENCE

elif [ "$MODE" == "eval" ]; then
    python -m hgpflow_v2.eval -i $CONFIG_PATH_INFERENCE

else
    echo "Invalid mode"
fi
